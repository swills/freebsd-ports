# Created by: clsung
# $FreeBSD: head/devel/p5-Project-Gantt/Makefile 484640 2018-11-10 19:57:07Z kwm $

PORTNAME=	Project-Gantt
PORTVERSION=	1.03
PORTREVISION=	8
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create Gantt charts to manage project scheduling

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Date>=0:devel/p5-Class-Date \
		convert:graphics/ImageMagick6

USES=		perl5
USE_PERL5=	configure
WRKSRC=		${WRKDIR}/Gantt

.include <bsd.port.mk>
