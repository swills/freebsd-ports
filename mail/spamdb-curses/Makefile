# Created by: Martin Tournoij <martin@arp242.net>
# $FreeBSD: head/mail/spamdb-curses/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	spamdb-curses
PORTVERSION=	1.2
CATEGORIES=	mail python
MASTER_SITES=	http://code.arp242.net/spamdb-curses/downloads/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Curses interface for OpenBSD spamd spam database (spamdb)

LICENSE=	MIT

RUN_DEPENDS=	${LOCALBASE}/sbin/spamdb:mail/spamd

USES=		python
USE_PYTHON=	distutils

.include <bsd.port.mk>
