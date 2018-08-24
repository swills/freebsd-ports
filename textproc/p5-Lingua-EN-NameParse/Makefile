# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/textproc/p5-Lingua-EN-NameParse/Makefile 477595 2018-08-19 20:32:32Z sunpoet $

PORTNAME=	Lingua-EN-NameParse
PORTVERSION=	1.37
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Routines for manipulating a person's name #'

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Parse-RecDescent>=1:devel/p5-Parse-RecDescent

USES=		dos2unix perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
