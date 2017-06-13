# Created by: Gabriel Linder <linder.gabriel@gmail.com>
# $FreeBSD: head/ports-mgmt/lsknobs/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	lsknobs
PORTVERSION=	1.0
CATEGORIES=	ports-mgmt
MASTER_SITES=	# none
DISTFILES=	# none
EXTRACT_ONLY=	# none

MAINTAINER=	linder.gabriel@gmail.com
COMMENT=	Simple script to help configure ports knobs and options

RUN_DEPENDS=	${LOCALBASE}/libexec/portconf:ports-mgmt/portconf

NO_BUILD=	yes
SUB_FILES=	pkg-message ${PORTNAME}.sh

PLIST_FILES=	sbin/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME}.sh \
		${STAGEDIR}${PREFIX}/sbin/${PORTNAME}

.include <bsd.port.mk>
