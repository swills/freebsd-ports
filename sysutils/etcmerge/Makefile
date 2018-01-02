# Created by: eivind
# $FreeBSD: head/sysutils/etcmerge/Makefile 456198 2017-12-13 09:00:29Z amdmi3 $

PORTNAME=	etcmerge
PORTVERSION=	0.4
CATEGORIES=	sysutils
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Automatic 3-way merge of /etc updates

LICENSE=	NONE

NO_BUILD=	yes
NO_ARCH=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	man/man8/${PORTNAME}.8.gz sbin/etcmerge

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/${PORTNAME}.sh ${STAGEDIR}${PREFIX}/sbin/${PORTNAME}
	${INSTALL_MAN} ${FILESDIR}/${PORTNAME}.8 ${STAGEDIR}${MANPREFIX}/man/man8

.include <bsd.port.mk>
