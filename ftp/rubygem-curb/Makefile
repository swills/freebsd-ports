# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/ftp/rubygem-curb/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	curb
PORTVERSION=	0.9.3
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
