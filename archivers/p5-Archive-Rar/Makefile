# Created by: Andrey Kostenko <andrey@kostenko.name>
# $FreeBSD: head/archivers/p5-Archive-Rar/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Archive-Rar
PORTVERSION=	2.02
PORTREVISION=	2
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface with the 'rar' command

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IPC-Run>=0:devel/p5-IPC-Run \
		rar:archivers/rar

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
