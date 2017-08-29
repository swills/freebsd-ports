# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/ftp/rubygem-curb/Makefile 448831 2017-08-27 17:32:15Z sunpoet $

PORTNAME=	curb
PORTVERSION=	0.9.4
CATEGORIES=	ftp rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby bindings for libcurl

LICENSE=	RUBY
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libcurl.so:ftp/curl

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
