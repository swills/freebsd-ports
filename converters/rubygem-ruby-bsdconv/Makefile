# Created by: buganini@gmail.com
# $FreeBSD: head/converters/rubygem-ruby-bsdconv/Makefile 466305 2018-04-03 09:49:53Z sunpoet $

PORTNAME=	ruby-bsdconv
PORTVERSION=	11.3.1
CATEGORIES=	converters rubygems
MASTER_SITES=	RG

MAINTAINER=	buganini@gmail.com
COMMENT=	Ruby wrapper for bsdconv

LICENSE=	ISCL

LIB_DEPENDS=	libbsdconv.so:converters/bsdconv

CONFIGURE_ARGS=	--with-bsdconv-dir=${LOCALBASE}
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
