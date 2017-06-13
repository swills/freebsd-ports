# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/security/p5-Filter-Crypto/Makefile 436247 2017-03-15 14:45:30Z mat $

PORTNAME=	Filter-Crypto
PORTVERSION=	2.07
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create runnable Perl files encrypted with OpenSSL libcrypto

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-PAR-Packer>=0:devel/p5-PAR-Packer
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 ssl
USE_PERL5=	configure
CONFIGURE_ARGS=	--prefix-dir=${OPENSSLBASE} --defaults

.include <bsd.port.mk>
