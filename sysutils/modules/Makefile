# Created by: Hokan
# $FreeBSD$

PORTNAME=	modules
PORTVERSION=	4.2.2
CATEGORIES=	sysutils tcl
MASTER_SITES=	https://github.com/cea-hpc/modules/releases/download/v${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dynamic modification of a user environment

LICENSE=	GPLv2

USES=		gmake tar:bzip2 tcl
GNU_CONFIGURE=	yes
GNU_CONFIGURE_PREFIX=${PREFIX}/Modules
CONFIGURE_ARGS=	--disable-compat-version \
		--enable-versioning

PLIST_SUB=	MODULES_VERSION=${PORTVERSION}

post-extract:
	${MV} ${WRKSRC}/doc/build/modulefile.4 ${WRKSRC}/doc/build/modulefile.5

.include <bsd.port.mk>
