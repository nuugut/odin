add_custom_command(OUTPUT test-authnz
        COMMAND fostgres-test odin-test-authnz -o test-authnz
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/authnz-test-view.json
            ${CMAKE_CURRENT_SOURCE_DIR}/authnz.fg
        MAIN_DEPENDENCY authnz.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/authn/001-initial.blue.sql
            ../Schema/authz/001-initial.blue.sql
            ../Configuration/odin-views.json
            authnz-test-view.json
            authnz.fg
    )

add_custom_command(OUTPUT test-db-bypass
        COMMAND fostgres-test odin-test-db-bypass -o test-db-bypass
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/db-bypass.fg
        MAIN_DEPENDENCY db-bypass.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/authn/001-initial.blue.sql
            ../Configuration/odin-views.json
            db-bypass.fg
    )

add_custom_command(OUTPUT test-login
        COMMAND fostgres-test odin-test-login -o test-login
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/login.fg
        MAIN_DEPENDENCY login.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/authn/001-initial.blue.sql
            ../Configuration/odin-views.json
            login.fg
    )

add_custom_command(OUTPUT test-logout
        COMMAND fostgres-test odin-test-logout -o test-logout
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/logout.fg
        MAIN_DEPENDENCY logout.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/authn/001-initial.blue.sql
            ../Schema/opts/logout/002-initial.blue.sql
            ../Configuration/odin-views.json
            logout.fg
    )

add_custom_command(OUTPUT test-no-auth
        COMMAND fostgres-test odin-test-no-auth -o test-no-auth
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/no-auth.fg
        MAIN_DEPENDENCY no-auth.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Configuration/odin-views.json
            no-auth.fg
    )

add_custom_command(OUTPUT test-password
        COMMAND fostgres-test odin-test-password -o test-password
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/password.fg
        MAIN_DEPENDENCY password.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/authn/001-initial.blue.sql
            ../Configuration/odin-views.json
            password.fg
    )

add_custom_command(OUTPUT test-permissions
        COMMAND fostgres-test odin-test-permissions -o test-permissions
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/permissions.json
            ${CMAKE_CURRENT_SOURCE_DIR}/permissions.fg
        MAIN_DEPENDENCY permissions.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/authn/001-initial.blue.sql
            ../Schema/authz/001-initial.blue.sql
            ../Configuration/odin-views.json
            permissions.fg
            permissions.json
    )

add_custom_command(OUTPUT test-registration-self
        COMMAND fostgres-test odin-test-registration-self -o test-registration-self
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/login-google-test.json
            ${CMAKE_CURRENT_SOURCE_DIR}/facebook-test.json
            ${CMAKE_CURRENT_SOURCE_DIR}/registration-self.fg
        MAIN_DEPENDENCY registration-self.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/authn/001-initial.blue.sql
            ../Schema/opts/full-name/001-initial.blue.sql
            ../Schema/opts/email/001-initial.blue.sql
            ../Configuration/odin-views.json
            login-google-test.json
            facebook-test.json
            registration-self.fg
    )

add_custom_command(OUTPUT test-session
        COMMAND fostgres-test odin-test-session -o test-session
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/session-test-view.json
            ${CMAKE_CURRENT_SOURCE_DIR}/session.fg
        MAIN_DEPENDENCY session.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/authn/001-initial.blue.sql
            ../Schema/authz/001-initial.blue.sql
            ../Configuration/odin-views.json
            session.fg
            session-test-view.json
    )

add_custom_command(OUTPUT test-forgotten-password
        COMMAND fostgres-test odin-test-forgotten-password -o test-forgotten-password
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/forgotten-password-test-view.json
            ${CMAKE_CURRENT_SOURCE_DIR}/forgotten-password.fg
        MAIN_DEPENDENCY forgotten-password.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/opts/forgotten-password/001-initial.blue.sql
            ../Configuration/odin-views.json
            forgotten-password-test-view.json
            forgotten-password.fg
    )

add_custom_command(OUTPUT test-login-facebook
        COMMAND fostgres-test odin-test-login-facebook -o test-login-facebook
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/facebook-test.json
            ${CMAKE_CURRENT_SOURCE_DIR}/login-google-test.json
            ${CMAKE_CURRENT_SOURCE_DIR}/login-facebook.fg
        MAIN_DEPENDENCY login-facebook.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/authn/001-initial.blue.sql
            ../Schema/opts/email/001-initial.blue.sql
            ../Schema/opts/facebook/001-initial.blue.sql
            ../Schema/opts/full-name/001-initial.blue.sql
            ../Configuration/odin-views.json
            facebook-test.json
            login-google-test.json
            login-facebook.fg
    )

add_custom_command(OUTPUT test-link-facebook
        COMMAND fostgres-test odin-test-link-facebook -o test-link-facebook
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/facebook-test.json
            ${CMAKE_CURRENT_SOURCE_DIR}/link-facebook.fg
        MAIN_DEPENDENCY link-facebook.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/authn/001-initial.blue.sql
            ../Schema/opts/email/001-initial.blue.sql
            ../Schema/opts/facebook/001-initial.blue.sql
            ../Schema/opts/full-name/001-initial.blue.sql
            ../Configuration/odin-views.json
            facebook-test.json
            link-facebook.fg
    )

add_custom_command(OUTPUT test-login-google
        COMMAND fostgres-test odin-test-login-google -o test-login-google
            $<TARGET_SONAME_FILE:odin-fg>
            $<TARGET_SONAME_FILE:odin-views>
            ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
            ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-webserver.json
            ${CMAKE_CURRENT_SOURCE_DIR}/login-google-test.json
            ${CMAKE_CURRENT_SOURCE_DIR}/facebook-test.json
            ${CMAKE_CURRENT_SOURCE_DIR}/login-google.fg
        MAIN_DEPENDENCY login-google.fg
        DEPENDS
            fostgres-test
            fostgres
            odin-fg
            odin-views
            ../Schema/bootstrap.sql
            ../Schema/core/000-initial.blue.sql
            ../Schema/authn/001-initial.blue.sql
            ../Schema/opts/email/001-initial.blue.sql
            ../Schema/opts/google/001-initial.blue.sql
            ../Schema/opts/full-name/001-initial.blue.sql
            ../Configuration/odin-views.json
            login-google-test.json
            facebook-test.json
            login-google.fg
    )

add_custom_command(OUTPUT test-app-login
    COMMAND fostgres-test odin-test-app-login -o test-app-login
        $<TARGET_SONAME_FILE:odin-fg>
        $<TARGET_SONAME_FILE:odin-views>
        ${CMAKE_CURRENT_SOURCE_DIR}/../Schema/bootstrap.sql
        ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-webserver.json
        ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-views.json
        ${CMAKE_CURRENT_SOURCE_DIR}/../Configuration/odin-app.json
        ${CMAKE_CURRENT_SOURCE_DIR}/app-login.fg
    MAIN_DEPENDENCY app-login.fg
    DEPENDS
        fostgres-test
        fostgres
        odin-fg
        odin-views
        ../Schema/bootstrap.sql
        ../Schema/core/000-initial.blue.sql
        ../Schema/authn/001-initial.blue.sql
        ../Schema/app/002-initial.blue.sql
        ../Configuration/odin-views.json
        app-login-test-figure.sql
        app-login.fg
)


## Because of the way cmake works we need this stuff at the end to
## actually make the above commands run when things change.
add_custom_target(odin-tests DEPENDS
        test-app-login
        test-authnz
        test-db-bypass
        test-login
        test-logout
        test-no-auth
        test-password
        test-permissions
        test-registration-self
        test-session
        test-forgotten-password
        test-login-facebook
        test-login-google
        test-link-facebook
    )
add_dependencies(stress odin-tests)
