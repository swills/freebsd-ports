# $FreeBSD: head/www/varnish-libvmod-digest/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	libvmod-digest
DISTVERSIONPREFIX=${PORTNAME}-
DISTVERSION=	1.0.1
CATEGORIES=	www
PKGNAMEPREFIX=	varnish-

MAINTAINER=	allanjude@FreeBSD.org
COMMENT=	Varnish Module (vmod) for computing message digests and HMAC

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	rst2man:textproc/py-docutils
LIB_DEPENDS=	libmhash.so:security/mhash

USES=		autoreconf gmake libtool pkgconfig python:2.7,build varnish
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static
INSTALL_TARGET=	install-strip

USE_GITHUB=	yes
GH_ACCOUNT=	varnish

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
