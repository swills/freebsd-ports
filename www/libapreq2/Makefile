# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: head/www/libapreq2/Makefile 464189 2018-03-11 17:38:45Z brnrd $

PORTNAME=	libapreq2
PORTVERSION=	2.13
PORTREVISION=	5
CATEGORIES=	www devel
MASTER_SITES=	APACHE_HTTPD/libapreq

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Generic Apache2 Request Library

LICENSE=	APACHE20

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-apache2-apxs=${APXS} --with-expat=${LOCALBASE}
INSTALL_TARGET=	install-strip
USES=		apache:2.2+ libtool
USE_LDCONFIG=	yes

.include <bsd.port.mk>
