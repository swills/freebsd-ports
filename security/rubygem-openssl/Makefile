# $FreeBSD: head/security/rubygem-openssl/Makefile 456368 2017-12-14 20:44:16Z sunpoet $

PORTNAME=	openssl
PORTVERSION=	2.1.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby gem that wraps around the OpenSSL library

LICENSE=	BSD2CLAUSE RUBY
LICENSE_COMB=	dual
LICENSE_FILE_BSD2CLAUSE=${WRKSRC}/BSDL
LICENSE_FILE_RUBY=	${WRKSRC}/LICENSE.txt

USE_RUBY=	yes
USES=		gem ssl

.include <bsd.port.mk>
