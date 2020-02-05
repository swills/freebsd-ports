# Created by: Willem van Engen <wvengen@stack.nl>
# $FreeBSD$

PORTNAME=	sword
PORTVERSION=	1.8.1
PORTREVISION=	8
CATEGORIES=	misc
MASTER_SITES=	ftp://ftp.crosswire.org/pub/sword/source/v${PORTVERSION:R}/ \
		http://crosswire.org/ftpmirror/pub/sword/source/v${PORTVERSION:R}/

MAINTAINER=	salvadore@FreeBSD.org
COMMENT=	Framework for manipulating Bible texts

LICENSE=	GPLv2

BUILD_DEPENDS=	cppunit-config:devel/cppunit

USES=		gmake libtool pathfix pkgconfig
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-conf --with-zlib
CPPFLAGS+=	-DU_USING_ICU_NAMESPACE=1
INSTALL_TARGET=	install-strip

SUB_FILES=	pkg-message
PLIST_SUB=	PORTVERSION=${PORTVERSION}

OPTIONS_DEFINE=	CURL CLUCENE
OPTIONS_DEFAULT=CURL CLUCENE
CLUCENE_DESC=	Include indexing capability

CURL_LIB_DEPENDS=	libcurl.so:ftp/curl
CURL_CONFIGURE_WITH=	curl

CLUCENE_USES=		compiler:c++11-lib
CLCUENE_LIB_DEPENDS=	libclucene-core.so:textproc/clucene \
			libicudata.so:devel/icu
CLUCENE_CONFIGURE_WITH=	--with-clucene=${LOCALBASE} --with-icu

post-patch:
	@${REINPLACE_CMD} 's|-O3||' ${WRKSRC}/configure

post-install:
	@(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} install_config)
	${MV} ${STAGEDIR}${PREFIX}/etc/sword.conf \
		${STAGEDIR}${PREFIX}/etc/sword.conf.sample

.include <bsd.port.mk>
