# Created by: Ashish SHUKLA <wahjava@gmail.com>
# $FreeBSD: head/textproc/p5-PPIx-Regexp/Makefile 453510 2017-11-05 03:40:41Z ashish $

PORTNAME=	PPIx-Regexp
PORTVERSION=	0.053
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:WYANT
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	PPI regular expression parser

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-PPI>=1.117:textproc/p5-PPI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
