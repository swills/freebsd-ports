# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/lang/p5-Quantum-Superpositions/Makefile 475340 2018-07-26 00:27:07Z bofh $

PORTNAME=	Quantum-Superpositions
PORTVERSION=	2.03
CATEGORIES=	lang science perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	QM-like superpositions in Perl

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-Multimethods>=0:devel/p5-Class-Multimethods
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
