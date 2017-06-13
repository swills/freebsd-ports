# $FreeBSD: head/devel/p5-Test-Name-FromLine/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Test-Name-FromLine
PORTVERSION=	0.13
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to fill test names from caller line

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	\
	p5-File-Slurp>0:devel/p5-File-Slurp
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild
NO_ARCH=	YES

.include <bsd.port.mk>
