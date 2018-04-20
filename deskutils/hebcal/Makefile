# Created by: Edwin Groothuis
# $FreeBSD: head/deskutils/hebcal/Makefile 467812 2018-04-20 08:33:46Z amdmi3 $

PORTNAME=	hebcal
PORTVERSION=	4.13
DISTVERSIONPREFIX=	v
CATEGORIES=	deskutils

MAINTAINER=	rtd24@columbia.edu
COMMENT=	Perpetual Jewish calendar

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf gmake perl5
GNU_CONFIGURE=	yes
TEST_TARGET=	check

USE_GITHUB=	yes

PLIST_FILES=	bin/hebcal \
		man/man1/hebcal.1.gz

.include <bsd.port.mk>
