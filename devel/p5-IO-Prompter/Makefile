# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/devel/p5-IO-Prompter/Makefile 451817 2017-10-12 08:10:02Z sunpoet $

PORTNAME=	IO-Prompter
PORTVERSION=	0.004014
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Prompt for input, read it, clean it, return it

BUILD_DEPENDS=	p5-Contextual-Return>0:devel/p5-Contextual-Return
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
