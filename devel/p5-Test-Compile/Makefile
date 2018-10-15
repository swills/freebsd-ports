# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: head/devel/p5-Test-Compile/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Test-Compile
PORTVERSION=	1.3.0
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:EGILES
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Check whether Perl module files compile correctly

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Devel-CheckOS>=0:devel/p5-Devel-CheckOS \
		p5-UNIVERSAL-require>=0:devel/p5-UNIVERSAL-require

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
