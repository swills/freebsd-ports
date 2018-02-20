# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: head/devel/p5-Test-Strict/Makefile 462435 2018-02-20 20:26:41Z sunpoet $

PORTNAME=	Test-Strict
PORTVERSION=	0.42
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test and report on use strict/warnings coverage

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-IO-stringy>=0:devel/p5-IO-stringy

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
