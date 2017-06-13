# $FreeBSD: head/audio/xmms-flac/files/Makefile 431427 2017-01-13 21:41:25Z naddy $

SUBDIRS= src/share src/plugin_common src/plugin_xmms

all install install-strip:
	@for d in ${SUBDIRS}; do \
		(cd $$d; ${MAKE} $@); \
	done
