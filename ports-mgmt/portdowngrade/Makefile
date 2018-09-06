# Created by: Heiner <h.eichmann@gmx.de>
# $FreeBSD: head/ports-mgmt/portdowngrade/Makefile 478673 2018-09-01 11:23:29Z crees $

PORTNAME=	portdowngrade
PORTVERSION=	1.7
CATEGORIES=	ports-mgmt
MASTER_SITES=	# empty
DISTFILES=	# none

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Sets a port back to a previous version

LICENSE=	PD

RUN_DEPENDS=	svn:devel/subversion${WITH_SUBVERSION_VER}

NO_BUILD=	yes
PLIST_FILES=	sbin/portdowngrade

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin/

.include <bsd.port.mk>
