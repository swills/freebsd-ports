# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Cache/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Cache
PORTVERSION=	2.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl Cache interface

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-File-NFSLock>=1.2:devel/p5-File-NFSLock \
		p5-Heap>=0.01:devel/p5-Heap \
		p5-IO-String>=1.02:devel/p5-IO-String \
		p5-TimeDate>=2.24:devel/p5-TimeDate

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
