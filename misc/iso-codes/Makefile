# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD$

PORTNAME=	iso-codes
PORTVERSION=	4.1
CATEGORIES=	misc
MASTER_SITES=	https://salsa.debian.org/iso-codes-team/iso-codes/uploads/049ce6aac94d842be809f4063950646c/

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Lists of the country, language, and currency iso names

LICENSE=	LGPL21

USES=		gettext gmake pathfix python:3.4+,build tar:xz
GNU_CONFIGURE=	yes
NO_ARCH=	yes

BINARY_ALIAS=	python3=${PYTHON_VERSION}

.include <bsd.port.mk>
