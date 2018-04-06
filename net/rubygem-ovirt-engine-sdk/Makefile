# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-ovirt-engine-sdk/Makefile 466652 2018-04-06 16:26:14Z sunpoet $

PORTNAME=	ovirt-engine-sdk
PORTVERSION=	4.2.3
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby SDK for the oVirt Engine API

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libcurl.so:ftp/curl
RUN_DEPENDS=	rubygem-json>=1:devel/rubygem-json

USE_GNOME=	libxml2
USE_RUBY=	yes
USES=		gem gnome

.include <bsd.port.mk>
