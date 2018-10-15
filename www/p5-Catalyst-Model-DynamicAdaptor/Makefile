# Created by: Tomoyuki Sakurai <cherry@trombik.org>
# $FreeBSD: head/www/p5-Catalyst-Model-DynamicAdaptor/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Catalyst-Model-DynamicAdaptor
PORTVERSION=	0.02
PORTREVISION=	2
CATEGORIES=	www devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TOMYHERO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Dynamically load adaptor modules

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=0:www/p5-Catalyst-Runtime \
		p5-Module-Recursive-Require>=0:devel/p5-Module-Recursive-Require \
		p5-Test-Spelling>=0:devel/p5-Test-Spelling

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
