TEMPLATE = subdirs

SUBDIRS += \
    app \
    tests

app.subdir = app
tests.subdir = tests

OTHER_FILES += $$files(rpm/*)

