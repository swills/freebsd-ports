# $FreeBSD: head/devel/p5-Devel-BeginLift/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Devel-BeginLift
PORTVERSION=	0.001003
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to make selected sub calls evaluate at compile time

RUN_DEPENDS=	\
	p5-B-Hooks-OP-Check-EntersubForCV>=0.03:devel/p5-B-Hooks-OP-Check-EntersubForCV
BUILD_DEPENDS:=	${RUN_DEPENDS} \
	p5-ExtUtils-Depends>0:devel/p5-ExtUtils-Depends

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
