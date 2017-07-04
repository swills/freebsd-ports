# $FreeBSD: head/www/varnish-libvmod-awsrest/Makefile 444710 2017-06-30 11:44:10Z vanilla $

PORTNAME=	libvmod-awsrest
DISTVERSIONPREFIX=	v
DISTVERSION=	51.7
#DISTVERSIONSUFFIX=	-varnish40
CATEGORIES=	www
PKGNAMEPREFIX=	varnish-

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Varnish Module (vmod) for generating headers for AWS REST API

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	rst2man:textproc/py-docutils
LIB_DEPENDS=	libmhash.so:security/mhash

USES=		autoreconf gmake libtool pkgconfig python:2,build varnish
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static
INSTALL_TARGET=	install-strip

USE_GITHUB=	yes
GH_ACCOUNT=	xcir

.include <bsd.port.mk>
