# Created by: Greg V <greg@unrelenting.technology>
# $FreeBSD: head/security/u2f-devd/Makefile 455847 2017-12-09 11:55:44Z cpm $

PORTNAME=	u2f-devd
PORTVERSION=	1.0.0
CATEGORIES=	security
MASTER_SITES=	#
DISTFILES=	#

MAINTAINER=	greg@unrelenting.technology
COMMENT=	Devd hotplug rules for Universal 2nd Factor (U2F) tokens

LICENSE=	BSD2CLAUSE

NO_BUILD=	yes
SUB_FILES=	pkg-message

GROUPS=		u2f

PLIST_FILES=	etc/devd/u2f.conf

do-install:
	${INSTALL_DATA} ${FILESDIR}/u2f.conf ${STAGEDIR}${PREFIX}/etc/devd

.include <bsd.port.mk>
