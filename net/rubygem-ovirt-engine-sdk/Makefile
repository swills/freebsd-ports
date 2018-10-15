# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-ovirt-engine-sdk/Makefile 481357 2018-10-06 09:36:42Z sunpoet $

PORTNAME=	ovirt-engine-sdk
PORTVERSION=	4.2.5
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
