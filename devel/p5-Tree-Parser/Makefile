# Created by: Aaron Dalton <aaron@daltons.ca>
# $FreeBSD: head/devel/p5-Tree-Parser/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Tree-Parser
PORTVERSION=	0.15
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Module to parse formatted files into tree structures

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Array-Iterator>=0:devel/p5-Array-Iterator \
		p5-Tree-Simple>=0:devel/p5-Tree-Simple
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
