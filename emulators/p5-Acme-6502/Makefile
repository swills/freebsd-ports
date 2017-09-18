# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/emulators/p5-Acme-6502/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Acme-6502
PORTVERSION=	0.77
PORTREVISION=	2
CATEGORIES=	emulators perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Pure Perl 65C02 simulator

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Term-ReadKey>=2.30:devel/p5-Term-ReadKey
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
