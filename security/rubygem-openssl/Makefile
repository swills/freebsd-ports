# $FreeBSD: head/security/rubygem-openssl/Makefile 482542 2018-10-20 14:52:50Z sunpoet $

PORTNAME=	openssl
PORTVERSION=	2.1.2
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby gem that wraps around the OpenSSL library

LICENSE=	BSD2CLAUSE RUBY
LICENSE_COMB=	dual
LICENSE_FILE_BSD2CLAUSE=${WRKSRC}/BSDL
LICENSE_FILE_RUBY=	${WRKSRC}/LICENSE.txt

USES=		gem ssl
USE_RUBY=	yes

.include <bsd.port.mk>
