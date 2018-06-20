# Created by: Tim Welch <ports@thepentagon.org>
# $FreeBSD: head/security/kedpm/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	kedpm
PORTVERSION=	0.4.0
PORTREVISION=	8
CATEGORIES=	security
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple application for managing personal data

LICENSE=	GPLv2+

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycrypto>0:security/py-pycrypto@${PY_FLAVOR}

NO_ARCH=	yes

USES=		python:2.7
USE_GNOME=	pygtk2
USE_PYTHON=	autoplist distutils

DESKTOP_ENTRIES="Ked Password Manager" "Secure Password Management" \
		"${DATADIR}/glade/logo.png" "kedpm" "" true

.include <bsd.port.mk>
