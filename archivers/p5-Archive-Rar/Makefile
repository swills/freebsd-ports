# Created by: Andrey Kostenko <andrey@kostenko.name>
# $FreeBSD: head/archivers/p5-Archive-Rar/Makefile 451677 2017-10-10 11:19:51Z sunpoet $

PORTNAME=	Archive-Rar
PORTVERSION=	2.02
PORTREVISION=	1
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface with the 'rar' command

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	rar:archivers/rar \
		p5-IPC-Run>=0:devel/p5-IPC-Run

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
