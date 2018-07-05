/**
    Copyright 2018 Felspar Co Ltd. <http://odin.felspar.com/>

    Distributed under the Boost Software License, Version 1.0.
    See <http://www.boost.org/LICENSE_1_0.txt>
*/

#include <odin/fg/native.hpp>
#include <odin/nonce.hpp>
#include <odin/user.hpp>
#include <odin/pwhashproc.hpp>

#include <fost/insert>


void odin::create_user(
    fostlib::pg::connection &cnx,
    f5::u8view reference,
    f5::u8view username
) {
    fg::json user_values;
    fostlib::insert(user_values, "reference", reference);
    fostlib::insert(user_values, "identity_id", username);
    cnx.insert("odin.identity_ledger", user_values);
}


void odin::set_password(
    fostlib::pg::connection &cnx,
    f5::u8view reference, 
    f5::u8view username, 
    f5::u8view password
) {
    fg::json user_values;
    fostlib::insert(user_values, "reference", reference);
    fostlib::insert(user_values, "identity_id", username);
    auto hashed = odin::hash_password(password);
    fostlib::insert(user_values, "password", hashed.first);
    fostlib::insert(user_values, "process", hashed.second);
    cnx.insert("odin.credentials_password_ledger", user_values);
}
