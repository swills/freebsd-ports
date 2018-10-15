# Created by: clsung
# $FreeBSD: head/devel/p5-Project-Gantt/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Project-Gantt
PORTVERSION=	1.03
PORTREVISION=	7
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create Gantt charts to manage project scheduling

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Date>=0:devel/p5-Class-Date \
		convert:graphics/ImageMagick

USES=		perl5
USE_PERL5=	configure
WRKSRC=		${WRKDIR}/Gantt

.include <bsd.port.mk>
