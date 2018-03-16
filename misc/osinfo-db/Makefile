# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: head/misc/osinfo-db/Makefile 464256 2018-03-12 16:49:29Z novel $

PORTNAME=	osinfo-db
PORTVERSION=	20180311
CATEGORIES=	misc
MASTER_SITES=	https://releases.pagure.org/libosinfo/

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Osinfo database files

BUILD_DEPENDS=	osinfo-db-tools>=1.1.0:sysutils/osinfo-db-tools

USES=		tar:xz
NO_BUILD=	yes

do-extract: # nada

do-install:
	osinfo-db-import --root ${STAGEDIR} --system ${DISTDIR}/${DISTFILES}

.include <bsd.port.mk>
