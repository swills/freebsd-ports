# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/ftp/rubygem-curb/Makefile 486036 2018-11-27 17:09:56Z sunpoet $

PORTNAME=	curb
PORTVERSION=	0.9.7
CATEGORIES=	ftp rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby bindings for libcurl

LICENSE=	RUBY
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
