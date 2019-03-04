# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: head/misc/osinfo-db/Makefile 494406 2019-03-02 14:31:00Z novel $

PORTNAME=	osinfo-db
PORTVERSION=	20190301
CATEGORIES=	misc
MASTER_SITES=	https://releases.pagure.org/libosinfo/

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Osinfo database files

BUILD_DEPENDS=	osinfo-db-tools>=1.1.0:sysutils/osinfo-db-tools

USES=		tar:xz

NO_ARCH=	yes
NO_BUILD=	yes

do-extract: # nada

do-install:
	osinfo-db-import --root ${STAGEDIR} --system ${DISTDIR}/${DISTFILES}

.include <bsd.port.mk>
