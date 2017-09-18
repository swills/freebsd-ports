# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/p5-XML-Compile-Tester/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	XML-Compile-Tester
PORTVERSION=	0.90
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Support XML::Compile Related Regression Testing

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Log-Report>=0.17:devel/p5-Log-Report \
		p5-Test-Deep>=0.095:devel/p5-Test-Deep
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
