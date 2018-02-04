# Created by: Andreas Heil <ah@linux-hq.de>
# $FreeBSD: head/textproc/p5-XML-Generator/Makefile 460799 2018-02-03 09:02:17Z amdmi3 $

PORTNAME=	XML-Generator
PORTVERSION=	1.04
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ah@linux-hq.de
COMMENT=	Simple Perl module for generating XML documents

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-XML-DOM>=0:textproc/p5-XML-DOM
RUN_DEPENDS=	p5-XML-DOM>=0:textproc/p5-XML-DOM
TEST_DEPENDS=	p5-Tie-IxHash>=0:devel/p5-Tie-IxHash

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
