# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/textproc/p5-Parse-BooleanLogic/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Parse-BooleanLogic
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Parser of boolean expressions

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Regexp-Common>=2.122:textproc/p5-Regexp-Common \
		p5-Module-Install>=0.91_1:devel/p5-Module-Install
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
