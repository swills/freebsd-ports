# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-Date-Calc-Iterator/Makefile 468116 2018-04-23 18:16:55Z sunpoet $

PORTNAME=	Date-Calc-Iterator
PORTVERSION=	1.02
CATEGORIES=	devel net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Iterate over a range of dates

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Date-Calc>=0:devel/p5-Date-Calc \
		p5-Ref-Util>=0.202:devel/p5-Ref-Util
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
