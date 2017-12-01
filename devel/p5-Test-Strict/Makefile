# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: head/devel/p5-Test-Strict/Makefile 455194 2017-11-30 10:59:29Z wen $

PORTNAME=	Test-Strict
PORTVERSION=	0.40
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test and report on use strict/warnings coverage

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Devel-Cover>=0.43:devel/p5-Devel-Cover
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-IO-stringy>=0:devel/p5-IO-stringy

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
