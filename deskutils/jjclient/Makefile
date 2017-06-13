# Created by: Lucas Holt <luke@justjournal.com>
# $FreeBSD: head/deskutils/jjclient/Makefile 428136 2016-12-08 17:01:31Z tijl $

PORTNAME=	jjclient
PORTVERSION=	1.0.2
PORTREVISION=	2
CATEGORIES=	deskutils
MASTER_SITES=	SF/justjournal/JustJournal%20UNIX%20Client/${PORTVERSION} \
		http://www.justjournal.com/software/unix/


MAINTAINER=	luke@justjournal.com
COMMENT=	Command line client for posting JustJournal entries

LIB_DEPENDS+=	libxmlrpc.so:net/xmlrpc-c

PLIST_FILES=	bin/jjclient

.include <bsd.port.mk>
