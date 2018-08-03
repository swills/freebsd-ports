# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/security/p5-Filter-Crypto/Makefile 476268 2018-08-02 23:43:12Z sunpoet $

PORTNAME=	Filter-Crypto
PORTVERSION=	2.08
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create runnable Perl files encrypted with OpenSSL libcrypto

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-PAR-Packer>=0:devel/p5-PAR-Packer
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-CPAN-Changes>=0:devel/p5-CPAN-Changes

USES=		perl5 ssl
USE_PERL5=	configure
CONFIGURE_ARGS=	--prefix-dir=${OPENSSLBASE} --defaults

.include <bsd.port.mk>
