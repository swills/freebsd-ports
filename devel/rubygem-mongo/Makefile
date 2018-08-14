# Created by: Evan Sarmiento <bsdports@wayfair.com>
# $FreeBSD: head/devel/rubygem-mongo/Makefile 477181 2018-08-14 16:41:45Z sunpoet $

PORTNAME=	mongo
PORTVERSION=	2.6.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby driver for MongoDB

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-bson>=4.3.0:devel/rubygem-bson

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/mongo_console

.include <bsd.port.mk>
