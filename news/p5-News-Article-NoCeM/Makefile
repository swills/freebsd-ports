# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: head/news/p5-News-Article-NoCeM/Makefile 430405 2017-01-02 20:13:16Z adamw $

PORTNAME=	News-Article-NoCeM
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	news perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module to generate accurate NoCeM notices

RUN_DEPENDS=	p5-News-Article>=0:news/p5-News-Article \
		p5-PGP-Sign>=0:security/p5-PGP-Sign
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
