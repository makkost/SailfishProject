TEMPLATE = subdirs

SUBDIRS += \
    app \
    tests

OTHER_FILES += $$files(rpm/*)
