# $FreeBSD: head/devel/p5-Test-LoadAllModules/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Test-LoadAllModules
PORTVERSION=	0.022
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to do use_ok for modules in search path

RUN_DEPENDS=	\
	p5-List-MoreUtils>0:lang/p5-List-MoreUtils
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
